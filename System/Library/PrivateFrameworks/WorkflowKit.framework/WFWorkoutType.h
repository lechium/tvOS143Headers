/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFWorkoutType : NSObject {

	unsigned long long _activityType;
	NSString* _name;

}

@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
+(id)allTypes;
-(NSString *)name;
-(id)initWithActivityType:(unsigned long long)arg1 ;
-(unsigned long long)activityType;
@end

