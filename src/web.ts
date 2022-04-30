import { WebPlugin } from '@capacitor/core';

import type { CirclePlugin } from './definitions';

export class CircleWeb extends WebPlugin implements CirclePlugin {
  async echo(options: { value: string }): Promise<{ value: string }> {
    console.log('ECHO', options);
    return options;
  }
}
