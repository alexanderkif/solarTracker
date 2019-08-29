<template>
  <q-layout view="hHh lpR fFf">

    <q-header reveal elevated class="text-white grad">
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

    <q-page-container class="grad-lite">
      <router-view />
    </q-page-container>

    <q-footer class="text-white text-center footer grad" reveal elevated >
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
  $list1: hsl(128, 73%, 37%),hsl(128, 73%, 73%);
  $list2: hsl(128, 73%, 88%),hsl(128, 73%, 98%);

  @mixin gradient($direction, $list) {
    background: -webkit-linear-gradient($direction, $list);
    background: -moz-linear-gradient($direction, $list);
    background: -o-linear-gradient($direction, $list);
    background: linear-gradient($direction, $list);
  }

  .header {
    @media screen and (max-height: 400px) {
      display: none;
    }

    @media screen and (max-width: 460px) {
      &__toolbar {
        font-size: 1rem;
      }
    }
  }

  .footer {
    @media screen and (max-height: 400px) {
      display: none;
    }
  }

  .grad {
    @include gradient(135deg, $list1);
  }

  .grad-lite {
    @include gradient(135deg, $list2);
  }
</style>
