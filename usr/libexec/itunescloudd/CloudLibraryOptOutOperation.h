//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSString;

@interface CloudLibraryOptOutOperation : CloudLibraryOperation
{
    NSString *_cuid;	// 8 = 0x8
    NSString *_troveID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ab38c
@property(copy, nonatomic) NSString *troveID; // @synthesize troveID=_troveID;
@property(copy, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
- (void)_sendOptOutWithCUID:(id)arg1 troveID:(id)arg2;	// IMP=0x00000001000aafb8
- (void)main;	// IMP=0x00000001000aad80
- (id)initWithConfiguration:(id)arg1 CUID:(id)arg2 troveID:(id)arg3;	// IMP=0x00000001000aac94
- (id)initWithCUID:(id)arg1 troveID:(id)arg2;	// IMP=0x00000001000aac04

@end

