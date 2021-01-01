//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel;

@interface WiFiStallDetect : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100058ea8
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100058e18
+ (id)URLOfModelInThisBundle;	// IMP=0x0000000100058a70
- (void).cxx_destruct;	// IMP=0x00000001000595f4
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100059378
- (id)predictionFromAC_problem_bitfield:(double)arg1 TxBE_expiredCompletions:(double)arg2 TxBE_failedCompletions:(double)arg3 TxBE_noAckCompletions:(double)arg4 TxBE_otherErrCompletions:(double)arg5 TxBK_expiredCompletions:(double)arg6 TxBK_failedCompletions:(double)arg7 TxBK_noAckCompletions:(double)arg8 TxBK_otherErrCompletions:(double)arg9 TxVI_expiredCompletions:(double)arg10 TxVI_failedCompletions:(double)arg11 TxVI_noAckCompletions:(double)arg12 TxVI_otherErrCompletions:(double)arg13 TxVO_expiredCompletions:(double)arg14 TxVO_failedCompletions:(double)arg15 TxVO_noAckCompletions:(double)arg16 TxVO_otherErrCompletions:(double)arg17 bt_abort:(double)arg18 bt_grant:(double)arg19 bt_request:(double)arg20 bt_uch_latency:(double)arg21 cca_bin:(double)arg22 completions_chipmodeerror:(double)arg23 completions_expired:(double)arg24 completions_internalerror:(double)arg25 completions_ioerror:(double)arg26 completions_noack:(double)arg27 completions_nobuf:(double)arg28 completions_noremotepeer:(double)arg29 completions_noresources:(double)arg30 completions_txfailure:(double)arg31 roam_count:(double)arg32 roam_duration:(double)arg33 rssi_bin:(double)arg34 snr_bin:(double)arg35 error:(id *)arg36;	// IMP=0x00000001000591c4
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100059094
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100059010
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100058d6c
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100058cf0
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100058c68
- (id)init;	// IMP=0x0000000100058c08
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000100058b6c

@end
