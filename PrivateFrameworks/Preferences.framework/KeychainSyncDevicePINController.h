/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <Preferences/KeychainSyncTextEntryController.h>

@class NSString;

@interface KeychainSyncDevicePINController : KeychainSyncTextEntryController
{
    BOOL _passcodeIncorrect;
    NSString *_enterPasscodeTitle;
    NSString *_enterPasscodeReason;
}

@property(retain, nonatomic) NSString *enterPasscodeReason; // @synthesize enterPasscodeReason=_enterPasscodeReason;
@property(retain, nonatomic) NSString *enterPasscodeTitle; // @synthesize enterPasscodeTitle=_enterPasscodeTitle;
- (void)didFinishEnteringPasscode:(id)arg1;
- (BOOL)canUnlockWithPasscode:(id)arg1;
- (id)specifiers;
- (void)dealloc;
- (id)init;

@end
