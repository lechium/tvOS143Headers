//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HBItemOrderVideoSubscriberApplicationConfiguration : NSObject
{
    NSString *_applicationIdentifier;	// 8 = 0x8
    unsigned long long _insertionIndex;	// 16 = 0x10
}

+ (id)configurationWithApplicationIdentifier:(id)arg1 insertionIndex:(unsigned long long)arg2;	// IMP=0x000000010002c2b8
- (void).cxx_destruct;	// IMP=0x000000010002c3dc
@property(nonatomic) unsigned long long insertionIndex; // @synthesize insertionIndex=_insertionIndex;
@property(copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
- (id)initWithApplicationIdentifier:(id)arg1 insertionIndex:(unsigned long long)arg2;	// IMP=0x000000010002c324

@end

