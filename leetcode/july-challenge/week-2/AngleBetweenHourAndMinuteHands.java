class Solution {
    public double angleClock(int hour, int minutes) {
        double degreesOfHours = hour * 30.0 + minutes * 0.5;
        double degreesOfMinutes = minutes * 6.0;
        double diff = Math.abs(degreesOfMinutes - degreesOfHours);

        return Math.min(diff, 360.0 - diff);
    }
}
