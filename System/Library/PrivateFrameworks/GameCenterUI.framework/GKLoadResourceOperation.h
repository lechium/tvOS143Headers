/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@interface GKLoadResourceOperation : NSOperation {

	/*^block*/id _outputBlock;
	long long __loadReason;

}

@property (assign,setter=_setLoadReason:,nonatomic) long long _loadReason;              //@synthesize _loadReason=__loadReason - In the implementation block
@property (copy) id outputBlock;                                                        //@synthesize outputBlock=_outputBlock - In the implementation block
-(void)main;
-(long long)_loadReason;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(void)didCompleteWithResource:(id)arg1 error:(id)arg2 ;
-(void)_setLoadReason:(long long)arg1 ;
@end

