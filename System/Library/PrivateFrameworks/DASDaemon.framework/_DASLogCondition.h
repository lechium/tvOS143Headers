/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSObject;

@interface _DASLogCondition : NSObject {

	BOOL _isIdeal;
	NSObject* _condition;

}

@property (nonatomic,retain) NSObject * condition;              //@synthesize condition=_condition - In the implementation block
@property (assign,nonatomic) BOOL isIdeal;                      //@synthesize isIdeal=_isIdeal - In the implementation block
+(id)withCondition:(id)arg1 ;
-(id)description;
-(NSObject *)condition;
-(void)setCondition:(NSObject *)arg1 ;
-(BOOL)isIdeal;
-(void)setIsIdeal:(BOOL)arg1 ;
@end
