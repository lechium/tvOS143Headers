/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface Filter : NSObject {

	unsigned _symptomId;
	long long _subsystemId;
	long long _queueLenAlert;
	long long _queueLenDrop;
	long long _queueTimeLimit;

}

@property (assign,nonatomic) long long subsystemId;                 //@synthesize subsystemId=_subsystemId - In the implementation block
@property (assign,nonatomic) unsigned symptomId;                    //@synthesize symptomId=_symptomId - In the implementation block
@property (assign,nonatomic) long long queueLenAlert;               //@synthesize queueLenAlert=_queueLenAlert - In the implementation block
@property (assign,nonatomic) long long queueLenDrop;                //@synthesize queueLenDrop=_queueLenDrop - In the implementation block
@property (assign,nonatomic) long long queueTimeLimit;              //@synthesize queueTimeLimit=_queueTimeLimit - In the implementation block
+(id)initForSymptom:(unsigned)arg1 withParams:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)subsystemId;
-(unsigned)symptomId;
-(long long)queueLenAlert;
-(long long)queueLenDrop;
-(long long)queueTimeLimit;
-(void)setSubsystemId:(long long)arg1 ;
-(void)setSymptomId:(unsigned)arg1 ;
-(void)setQueueLenAlert:(long long)arg1 ;
-(void)setQueueLenDrop:(long long)arg1 ;
-(void)setQueueTimeLimit:(long long)arg1 ;
@end

