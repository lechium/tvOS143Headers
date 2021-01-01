//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface PAMediaConversionServiceResourceURLReference : NSObject
{
    _Bool _mustStopAccessingURL;	// 8 = 0x8
    _Bool _shouldDeleteOnDeallocation;	// 9 = 0x9
    NSURL *_url;	// 16 = 0x10
}

+ (_Bool)getPathHash:(unsigned long long *)arg1 lastPathComponent:(id *)arg2 forDictionaryRepresentation:(id)arg3;	// IMP=0x0000000100003cd0
+ (id)referenceWithDictionaryRepresentation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100003af4
+ (id)referenceWithURL:(id)arg1;	// IMP=0x0000000100003a28
- (void).cxx_destruct;	// IMP=0x0000000100003a1c
@property _Bool shouldDeleteOnDeallocation; // @synthesize shouldDeleteOnDeallocation=_shouldDeleteOnDeallocation;
@property _Bool mustStopAccessingURL; // @synthesize mustStopAccessingURL=_mustStopAccessingURL;
@property(retain) NSURL *url; // @synthesize url=_url;
- (id)dictionaryRepresentationWithError:(id *)arg1;	// IMP=0x0000000100003918
- (void)dealloc;	// IMP=0x00000001000036f0
- (_Bool)getFileSize:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000100003680
- (unsigned long long)hash;	// IMP=0x0000000100003630
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100003588
- (void)getPathHash:(unsigned long long *)arg1 lastPathComponent:(id *)arg2;	// IMP=0x0000000100003498

@end
