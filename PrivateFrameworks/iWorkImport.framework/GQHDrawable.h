/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "GQDrawablesGenerator.h"

__attribute__((visibility("hidden")))
@interface GQHDrawable : NSObject <GQDrawablesGenerator>
{
}

+ (Class)beginTable:(id)arg1;
+ (int)endDrawables:(id)arg1;
+ (int)handleInlineDrawable:(id)arg1 htmlState:(id)arg2;
+ (int)handleFloatingDrawable:(id)arg1 htmlState:(id)arg2;
+ (void)doneGeneratingDrawable:(id)arg1 htmlState:(id)arg2;
+ (void)aboutToGenerateDrawable:(id)arg1 htmlState:(id)arg2;
+ (int)handleDrawable:(id)arg1 state:(id)arg2;
+ (int)beginDrawables:(id)arg1;

@end

