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
      <q-carousel-slide :name="1" :img-src="img1" />
      <q-carousel-slide :name="2" :img-src="img2" />
      <q-carousel-slide :name="3" :img-src="img3" />
      <q-carousel-slide :name="4" :img-src="img4" />
      <q-carousel-slide :name="5" :img-src="img5" />
      <q-carousel-slide :name="6" :img-src="img6" />

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
      img1: 'statics/IMG_1.jpg',
      img2: 'statics/IMG_2.jpg',
      img3: 'statics/IMG_3.jpg',
      img4: 'statics/IMG_4.jpg',
      img5: 'statics/IMG_5.jpg',
      img6: 'statics/IMG_6.jpg'
    }
  }
}
</script>
