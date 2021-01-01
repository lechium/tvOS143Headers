//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSHTTPURLResponse;

@interface LakituResponse : NSObject
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSHTTPURLResponse *_httpResponse;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100016c94
@property(readonly, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (id)initWithURLResponse:(id)arg1 data:(id)arg2;	// IMP=0x0000000100016750
- (id)_parsePlistFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000165a0

@end

