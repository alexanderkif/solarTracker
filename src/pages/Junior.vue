<template>
  <q-page class="q-pa-md q-mx-auto" style="max-width: 1200px">
    <div class="text-grey-8 text-center q-pa-lg text-h6 q-mx-auto">
      <div class="q-mx-auto q-my-md" style="width: 80%">
        OUR PROJECT WON THE JUNIOR COMPETITION IN NATIONAL RESEARCH NUCLEAR UNIVERSITY MEPHI<br/>
        (MOSCOW ENGINEERING PHYSICS INSTITUTE)<br/>
        FEBRUARY 15, 2017
      </div>
      <div class="text-left q-mx-auto q-my-md" style="width: 80%">
        TO GET MORE FOLLOW THE LINKS:<br/>
        <a href="https://mephi.ru/eng/" target="_blank">https://mephi.ru/eng/</a><br/>
        <a href="https://mephi.ru/content/news/1387/121419/" target="_blank">
          https://mephi.ru/content/news/1387/121419/</a><br/>
        <a href="https://mephi.ru/schoolkids/olimpiads/junior/pressa/podgotovka/pobediteli-2017.php" target="_blank">
          https://mephi.ru/schoolkids/olimpiads/junior/pressa/podgotovka/pobediteli-2017.php</a>
      </div>
      <div
        v-for="img in images"
        :key="img.index"
        >
        <q-img
          class="q-mx-auto q-my-lg"
          :src="img.url"
          :ratio="1"
          basic
          spinner-color="white"
        >
        </q-img>
      </div>
    </div>
  </q-page>
</template>

<style>
</style>

<script>
export default {
  name: 'Junior',
  meta: {
    title: 'Junior competition'
  },
  data () {
    return {
      images: [
        { name: 1, url: 'statics/112.jpg' },
        { name: 2, url: 'statics/111.jpg' },
        { name: 3, url: 'statics/222.jpg' },
        { name: 4, url: 'statics/333.jpg' },
        { name: 5, url: 'statics/444.jpg' }
      ]
    }
  }
}
</script>
