//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;

@interface TVHProductContentSectionItem : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    UIViewController *_viewController;	// 16 = 0x10
    double _spacing;	// 24 = 0x18
}

+ (id)new;	// IMP=0x000000010003b1ec
- (void).cxx_destruct;	// IMP=0x000000010003b698
@property(readonly, nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x000000010003b554
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003b420
- (unsigned long long)hash;	// IMP=0x000000010003b384
- (id)initWithViewController:(id)arg1 spacing:(double)arg2;	// IMP=0x000000010003b2b0
- (id)init;	// IMP=0x000000010003b228

@end

