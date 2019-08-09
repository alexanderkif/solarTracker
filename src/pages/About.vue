<template>
  <q-page class="q-pa-md q-mx-auto" style="max-width: 1200px">
    <div class="text-grey-8 text-center q-pa-lg text-h6 q-mx-auto">
      <div class="q-mx-auto q-my-md" style="width: 80%">
        ABOUT US<br/>
        Dad and son
      </div>
      <q-img
        class="q-mx-auto q-my-lg"
        src="statics/I_and_son.jpg"
        :ratio="1"
        basic
        spinner-color="white"
      >
      </q-img>
    </div>
  </q-page>
</template>

<style>
</style>

<script>
export default {
  name: 'About',
  meta: {
    title: 'About us'
  }
}
</script>
