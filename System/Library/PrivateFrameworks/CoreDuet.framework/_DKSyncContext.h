/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, _DKKnowledgeStorage;

@interface _DKSyncContext : NSObject {

	NSString* _name;
	_DKKnowledgeStorage* _storage;

}

@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStorage * storage;              //@synthesize storage=_storage - In the implementation block
+(id)new;
-(NSString *)name;
-(id)init;
-(_DKKnowledgeStorage *)storage;
-(id)initWithName:(id)arg1 ;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
@end

