<template>
  <div class="q-pa-md">
    <q-carousel
      swipeable
      animated
      v-model="slide"
      :fullscreen.sync="fullscreen"
      thumbnails
      infinite
    >
      <q-carousel-slide
        v-for="image in images"
        :name="image.name"
        :key="image.index"
        :img-src="image.url" />

      <template v-slot:control>
        <q-carousel-control
          position="top-right"
          :offset="[18, 18]"
        >
          <q-btn
            push round dense color="white" text-color="primary"
            :icon="fullscreen ? 'fullscreen_exit' : 'fullscreen'"
            @click="fullscreen = !fullscreen"
          />
        </q-carousel-control>
      </template>
    </q-carousel>
    <div class="text-center q-py-lg text-h6">
      This is our first steps to build Solar traker.<br/>
      Movings up and down have limits with two switches.<br/>
      Left and right turn have no limit switches. Tracker can spin around.
    </div>
    <div class="q-pa-md">
      <div class="q-video q-mx-auto" style="max-width: 400px; height: 300px;">
        <iframe
          src="https://www.youtube.com/embed/Z4RIKwUoG4Q?rel=0"
          frameborder="0"
          allowfullscreen
        />
      </div>
    </div>
  </div>
</template>

<style>
</style>

<script>
export default {
  name: 'First',
  meta: {
    title: 'First steps'
  },
  data () {
    return {
      slide: 1,
      fullscreen: false,
      images: [
        { name: 1, url: 'statics/IMG_1.jpg' },
        { name: 2, url: 'statics/IMG_2.jpg' },
        { name: 3, url: 'statics/IMG_3.jpg' },
        { name: 4, url: 'statics/IMG_4.jpg' },
        { name: 5, url: 'statics/IMG_5.jpg' },
        { name: 6, url: 'statics/IMG_6.jpg' }
      ]
    }
  }
}
</script>
