//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BLOperation.h"

@class BLEvaluatorDownload, BUCellularIdentity;

__attribute__((visibility("hidden")))
@interface BLCellularNetworkEvaluatorOperation : BLOperation
{
    BLEvaluatorDownload *_cellularDownload;	// 80 = 0x50
    BUCellularIdentity *_cellularIdentity;	// 88 = 0x58
    long long _evaluatorResult;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100059df8
@property(readonly, nonatomic) long long evaluatorResult; // @synthesize evaluatorResult=_evaluatorResult;
@property(retain, nonatomic) BUCellularIdentity *cellularIdentity; // @synthesize cellularIdentity=_cellularIdentity;
@property(retain, nonatomic) BLEvaluatorDownload *cellularDownload; // @synthesize cellularDownload=_cellularDownload;
- (void)run;	// IMP=0x0000000100059800
- (id)_presentDialogRequest:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000100059758

@end

