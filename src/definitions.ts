export interface CirclePlugin {
  echo(options: { value: string }): Promise<{ value: string }>;
}
