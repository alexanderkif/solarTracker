<template>
  <q-layout view="hHh lpR fFf">

    <q-header elevated class="bg-primary text-white">
      <q-toolbar>
        <q-toolbar-title class="text-center text-uppercase">
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

    <q-page-container>
      <router-view />
    </q-page-container>

    <q-footer elevated class="bg-grey-8 text-white text-center">
      <q-toolbar>
        <q-toolbar-title>
          Copyright &copy; Aleksandr Nikiforov
        </q-toolbar-title>
      </q-toolbar>
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

<style>
</style>
