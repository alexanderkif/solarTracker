<template>
  <q-layout view="hHh lpR fFf">

    <q-header reveal elevated class="text-white" style="background: linear-gradient(90deg, #257784, #AC0CE0);">
      <q-toolbar class="header">
        <q-toolbar-title class="text-center text-uppercase header__toolbar">
          Solar Tracker made by me and my son
        </q-toolbar-title>
      </q-toolbar>

      <q-tabs align="center" inline-label>
        <q-route-tab
          v-for="tab in tabs"
          :key="tab.label"
          :to="tab.to"
          :icon="tab.icon"
          :label="tab.label" />
      </q-tabs>
    </q-header>

    <q-page-container style="background: linear-gradient(90deg, #cfedf2, #f4d8fd);">
      <router-view />
    </q-page-container>

    <q-footer class="text-grey-13 text-center footer" reveal elevated style="background: linear-gradient(90deg, #257784, #AC0CE0);">
      Copyright &copy; Aleksandr Nikiforov
    </q-footer>

  </q-layout>
</template>

<script>
export default {
  name: 'MyLayout',
  data () {
    return {
      tabs: [
        {
          label: 'First steps',
          icon: 'history',
          to: '/first'
        },
        {
          label: 'Solar tracker',
          icon: 'wb_sunny',
          to: '/'
        },
        {
          label: 'Experiment',
          icon: 'trending_up',
          to: '/experiment'
        },
        {
          label: 'Junior competition',
          icon: 'school',
          to: '/junior'
        },
        {
          label: 'About us',
          icon: 'people',
          to: '/about'
        }
      ]
    }
  }
}
</script>

<style lang="scss">
.header {
  @media screen and (max-height: 400px) {
    display: none;
  }

  &__toolbar {
    @media screen and (max-width: 460px) {
      font-size: 1rem;
    }
  }
}

.footer {
  @media screen and (max-height: 400px) {
    display: none;
  }
}
</style>
