//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _ADChunkInfo : NSObject
{
    NSString *_postGen;	// 8 = 0x8
    NSString *_validity;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010009502c
@property(copy, nonatomic) NSString *validity; // @synthesize validity=_validity;
@property(copy, nonatomic) NSString *postGen; // @synthesize postGen=_postGen;
- (id)anchorWithKey:(id)arg1 appID:(id)arg2 syncType:(id)arg3;	// IMP=0x0000000100094e54
- (_Bool)isValid;	// IMP=0x0000000100094e04
- (id)dictionaryRepresentation;	// IMP=0x0000000100094d78
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100094ba8

@end

