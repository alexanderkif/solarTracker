<template>
  <q-page class="q-pa-md q-mx-auto" style="max-width: 1200px;">
    <div class="text-grey-8 text-center q-pa-lg text-h6 q-mx-auto">
      <div class="q-mx-auto q-my-md" style="width: 80%">
        SOLAR TRACKER. SECOND VERSION.<br/>
        WE HAVE CHANGED ARDUINO, SOLAR PANELS AND ALL AROUND THEM )))<br/>
        DECEMBER 5, 2016
      </div>
      <div class="text-left q-mx-auto q-my-md" style="width: 80%">
        We have connected Arduino Nano now, because it uses less current.
         And you can see the new solar panels.
          I’ve checked them under 150 Watt lamp and they give 110 mA.
      </div>
      <q-img
        class="q-mx-auto q-my-lg"
        :src="urlImg"
        :ratio="16/11"
        basic
        spinner-color="white"
      >
      </q-img>
      <div class="text-left q-mx-auto q-my-md" style="width: 80%">
        But outside in the winter it gives too little energy. If cloudy current is about 10 mA.
      </div>
      <div class="text-left q-mx-auto q-my-md" style="width: 80%">
        We have connected tracker to PC to save and investigate parameters.
         We used RS-485, OPC server MasterOPC, and MasterSCADA to show and memorise results.
      </div>
      <div class="q-video q-mx-auto q-my-lg" style="height: 400px;">
        <iframe
          src="https://www.youtube.com/embed/ub_FHhKzo3E?rel=0"
          frameborder="0"
          allowfullscreen
        />
      </div>
      <div class="q-mx-auto q-my-md" style="width: 80%">
        WAS ADDED LOW LEVELS TO THE MOTOR PINS IN STANDBY MODE IN THE PROGRAM.<br/>
        WE HAVE ADDED NEW METHOD INSIDE STEPPER.H<br/>
        OCTOBER 4, 2016
      </div>
      <div class="text-left q-mx-auto q-my-md" style="width: 80%">
        To see changes in 3 files, follow the link
         <a href="https://github.com/alexanderkif/solarTracker" target="_blank">https://github.com/alexanderkif/solarTracker</a>
      </div>
      <div class="q-video q-mx-auto q-my-lg" style="height: 400px;">
        <iframe
          src="https://www.youtube.com/embed/biYNSnW62qI?rel=0"
          frameborder="0"
          allowfullscreen
        />
      </div>
    </div>
  </q-page>
</template>

<style>
</style>

<script>
export default {
  name: 'PageIndex',
  meta: {
    title: 'Solar Tracker'
  },
  data () {
    return {
      urlImg: 'statics/test789.png'
    }
  }
}
</script>
