/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface MSPowerAssertionManager : NSObject {

	BOOL _isAssertingPowerAssertion;
	BOOL _isBusy;
	int _busyCount;
	int _UIBusyCount;
	unsigned _assertionID;

}

@property (assign,nonatomic) BOOL isBusy;                                 //@synthesize isBusy=_isBusy - In the implementation block
@property (assign,nonatomic) BOOL isAssertingPowerAssertion;              //@synthesize isAssertingPowerAssertion=_isAssertingPowerAssertion - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
@property (assign,nonatomic) int busyCount;                               //@synthesize busyCount=_busyCount - In the implementation block
@property (assign,nonatomic) int UIBusyCount;                             //@synthesize UIBusyCount=_UIBusyCount - In the implementation block
+(id)sharedManager;
-(int)busyCount;
-(BOOL)isBusy;
-(void)setBusyCount:(int)arg1 ;
-(void)retainBusy;
-(void)releaseBusy;
-(void)retainUIBusy;
-(void)releaseUIBusy;
-(int)UIBusyCount;
-(void)setUIBusyCount:(int)arg1 ;
-(void)_assertPowerAssertion;
-(void)_deassertPowerAssertion;
-(void)_recomputePowerAssertion;
-(void)toggleAssertion;
-(BOOL)isAssertingPowerAssertion;
-(void)setIsAssertingPowerAssertion:(BOOL)arg1 ;
-(unsigned)assertionID;
-(void)setAssertionID:(unsigned)arg1 ;
-(void)setIsBusy:(BOOL)arg1 ;
@end
