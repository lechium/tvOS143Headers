/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSCopying;
@class NSObject;

@interface ML3StatementCacheNode : NSObject {

	NSObject*<NSCopying> _dictionaryKey;
	ML3StatementCacheNode* _next;

}

@property (nonatomic,copy) NSObject*<NSCopying> dictionaryKey;              //@synthesize dictionaryKey=_dictionaryKey - In the implementation block
@property (nonatomic,retain) ML3StatementCacheNode * next;                  //@synthesize next=_next - In the implementation block
-(id)description;
-(ML3StatementCacheNode *)next;
-(void)setNext:(ML3StatementCacheNode *)arg1 ;
-(NSObject*<NSCopying>)dictionaryKey;
-(void)setDictionaryKey:(NSObject*<NSCopying>)arg1 ;
-(id)initWithDictionaryKey:(id)arg1 ;
@end

