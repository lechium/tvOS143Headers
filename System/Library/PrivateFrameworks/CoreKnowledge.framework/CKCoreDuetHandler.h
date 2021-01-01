/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CKCoreDuetHandler : NSObject
+(id)duetKnowledgeStore;
+(void)duetEventsWithIdentifier:(id)arg1 inStreamNamed:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 limit:(unsigned long long)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)saveEvents:(id)arg1 toStreamNamed:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)removeAllFromStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

