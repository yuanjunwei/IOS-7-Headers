/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSOutputStream.h"

@class NSError;

@interface SSGzipOutputStream : NSOutputStream
{
    NSOutputStream *_actualOutputStream;
    struct z_stream_s _stream;
    NSError *_streamError;
    char *_streamOutBuffer;
    unsigned int _streamOutBufferSize;
    unsigned int _streamContentLength;
}

- (void)_setStreamError:(int)arg1 context:(id)arg2;
- (int)_consumeStreamOutput:(BOOL)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (BOOL)hasSpaceAvailable;
- (int)write:(const char *)arg1 maxLength:(unsigned int)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (unsigned int)streamContentLength;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initToMemory;
- (id)initToFileAtPath:(id)arg1 append:(BOOL)arg2;
- (id)init;

@end
