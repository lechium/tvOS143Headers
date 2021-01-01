//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IFFFeature : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _hidden;	// 9 = 0x9
    NSString *_domain;	// 16 = 0x10
    NSString *_feature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100001690
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *feature; // @synthesize feature=_feature;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (_Bool)isEnabledWithHidden:(_Bool)arg1;	// IMP=0x0000000100001600
@property(readonly, nonatomic) NSString *name;
- (id)initWithDomain:(id)arg1 feature:(id)arg2;	// IMP=0x0000000100001488

@end

