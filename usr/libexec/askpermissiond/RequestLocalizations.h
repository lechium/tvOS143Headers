//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RequestLocalizations : NSObject
{
    NSString *_approve;	// 8 = 0x8
    NSString *_body;	// 16 = 0x10
    NSString *_decline;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100015754
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *decline; // @synthesize decline=_decline;
@property(readonly, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *approve; // @synthesize approve=_approve;
- (id)description;	// IMP=0x00000001000156d4
- (id)compile;	// IMP=0x00000001000155a4
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100015398
- (id)initWithApprove:(id)arg1 body:(id)arg2 decline:(id)arg3 title:(id)arg4;	// IMP=0x000000010001529c

@end

