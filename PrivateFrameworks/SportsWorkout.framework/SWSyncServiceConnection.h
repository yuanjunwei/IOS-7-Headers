/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData, NSTimer, NSURLConnection, SWSyncHost;

@interface SWSyncServiceConnection : NSObject
{
    SWSyncHost *_host;
    NSURLConnection *_URLConnection;
    NSMutableData *_receivedData;
    NSTimer *_bailOutTimer;
}

@property(readonly, nonatomic) SWSyncHost *host; // @synthesize host=_host;
- (id)delegate;
- (void)handleResponse:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_bailOutTimerFired:(id)arg1;
- (void)_restartBailOutTimer;
- (void)dealloc;
- (id)initWithHost:(id)arg1;

@end
