/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <VoiceShortcutClient/WFObservableResult.h>

@class NSArray, WFWorkflowQuery, WFCoreDataResultState;

@interface WFObservableArrayResult : WFObservableResult {

	NSArray* _values;
	WFWorkflowQuery* _query;
	WFCoreDataResultState* _resultState;

}

@property (nonatomic,readonly) WFWorkflowQuery * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,copy) WFCoreDataResultState * resultState;              //@synthesize resultState=_resultState - In the implementation block
@property (nonatomic,readonly) NSArray * values;                             //@synthesize values=_values - In the implementation block
+(void)getResultWithQuery:(id)arg1 valueType:(Class)arg2 glyphSize:(CGSize)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)description;
-(NSArray *)values;
-(WFWorkflowQuery *)query;
-(WFCoreDataResultState *)resultState;
-(id)initWithValueType:(Class)arg1 glyphSize:(CGSize)arg2 initialValues:(id)arg3 query:(id)arg4 resultState:(id)arg5 ;
-(void)handleChangeNotification:(id)arg1 ;
-(void)setResultState:(WFCoreDataResultState *)arg1 ;
@end
