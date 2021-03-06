/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate;

@interface PLTimeSnapshot : NSObject <NSCopying>
{
    BOOL _staticSnapshot;
    NSDate *_timestamp;
    NSDate *_startTimestamp;
    NSDate *_lastWakeTimestamp;
    NSDate *_lastSleepTimestamp;
    double _sleepSeconds;
    double _cachedWakeTime;
}

@property BOOL staticSnapshot; // @synthesize staticSnapshot=_staticSnapshot;
@property double cachedWakeTime; // @synthesize cachedWakeTime=_cachedWakeTime;
@property double sleepSeconds; // @synthesize sleepSeconds=_sleepSeconds;
@property(retain, nonatomic) NSDate *lastSleepTimestamp; // @synthesize lastSleepTimestamp=_lastSleepTimestamp;
@property(retain, nonatomic) NSDate *lastWakeTimestamp; // @synthesize lastWakeTimestamp=_lastWakeTimestamp;
@property(retain, nonatomic) NSDate *startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly) double sleepHours;
@property(readonly) double wakeHours;
@property(readonly) double sleepMinutes;
@property(readonly) double wakeMinutes;
@property(readonly) double wakeSeconds;
- (void)dealloc;
- (id)init;

@end

