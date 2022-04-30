import { registerPlugin } from '@capacitor/core';

import type { CirclePlugin } from './definitions';

const Circle = registerPlugin<CirclePlugin>('Circle', {
  web: () => import('./web').then(m => new m.CircleWeb()),
});

export * from './definitions';
export { Circle };
