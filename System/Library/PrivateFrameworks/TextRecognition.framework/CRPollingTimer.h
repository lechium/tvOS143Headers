/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRPollingTimer : NSObject {

	SCD_Struct_CR20 _fireTime;
	BOOL _fired;
	BOOL _valid;
	id _target;
	SEL _selector;

}

@property (assign,nonatomic) SCD_Struct_CR20 fireTime; 
@property (assign,nonatomic,__weak) id target;                      //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                          //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL fired;                            //@synthesize fired=_fired - In the implementation block
@property (assign,nonatomic) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(SEL)selector;
-(void)invalidate;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(SCD_Struct_CR20)fireTime;
-(void)setFireTime:(SCD_Struct_CR20)arg1 ;
-(BOOL)valid;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(void)setFired:(BOOL)arg1 ;
-(BOOL)fired;
-(void)evalAtTime:(SCD_Struct_CR20)arg1 ;
@end
