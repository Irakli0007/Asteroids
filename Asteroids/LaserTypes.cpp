#include "LaserTypes.h"

AlienLaser::AlienLaser(float x, float y, float speed):Laser(x, y, speed) {
	
}

bool AlienLaser::collision() {

}

PlayerLaser::PlayerLaser(float x, float y, float speed) : Laser(x, y, -speed) {
	
}