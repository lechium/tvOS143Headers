/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, NSData;

@interface NLParsecDataManager : NSObject {

	NSMutableArray* m_entries;

}

@property (nonatomic,readonly) NSData * serializableData; 
+(void)notifyStoredSerializedDataChanged;
+(BOOL)supportsDomain:(id)arg1 ;
+(void)enumerateEntriesForSerializedData:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(unsigned short)maxNumberOfPOIsAllowed;
-(void)dealloc;
-(NSData *)serializableData;
-(void)addEntry:(id)arg1 domain:(id)arg2 metaData:(id)arg3 ;
-(void)insertEntry:(id)arg1 ;
-(id)getEntries;
@end
