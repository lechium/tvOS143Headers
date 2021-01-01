/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSArray;

@interface IMMultiDict : NSObject {

	unsigned long long _count;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (assign,nonatomic) unsigned long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)removeAllObjects;
-(unsigned long long)countForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)setCount:(unsigned long long)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(id)peekObjectForKey:(id)arg1 ;
-(id)popObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(id)dequeueObjectForKey:(id)arg1 ;
@end

