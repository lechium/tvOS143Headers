/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSData;

@interface SiriCoreSyncRecord : NSObject {

	int _itemPriority;
	NSString* _key;
	NSString* _identifier;
	NSString* _debugValue;
	NSData* _dataValue;
	NSData* _addedValue;
	NSData* _metaValue;
	double _updateTime;
	NSData* _checkHash;

}

@property (nonatomic,retain) NSString * key;                     //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int itemPriority;                   //@synthesize itemPriority=_itemPriority - In the implementation block
@property (nonatomic,retain) NSString * debugValue;              //@synthesize debugValue=_debugValue - In the implementation block
@property (nonatomic,retain) NSData * dataValue;                 //@synthesize dataValue=_dataValue - In the implementation block
@property (nonatomic,retain) NSData * addedValue;                //@synthesize addedValue=_addedValue - In the implementation block
@property (nonatomic,retain) NSData * metaValue;                 //@synthesize metaValue=_metaValue - In the implementation block
@property (assign,nonatomic) double updateTime;                  //@synthesize updateTime=_updateTime - In the implementation block
@property (nonatomic,retain) NSData * checkHash;                 //@synthesize checkHash=_checkHash - In the implementation block
+(id)syncRecordWithKey:(id)arg1 identifier:(id)arg2 priority:(int)arg3 debugValue:(id)arg4 dataValue:(id)arg5 addedValue:(id)arg6 appMeta:(id)arg7 ;
+(id)syncRecordWithKey:(id)arg1 identifier:(id)arg2 ;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setDataValue:(NSData *)arg1 ;
-(NSData *)dataValue;
-(void)setUpdateTime:(double)arg1 ;
-(double)updateTime;
-(void)updateHash;
-(int)itemPriority;
-(void)setItemPriority:(int)arg1 ;
-(id)initWithKey:(id)arg1 identifier:(id)arg2 priority:(int)arg3 debugValue:(id)arg4 dataValue:(id)arg5 addedValue:(id)arg6 appMeta:(id)arg7 ;
-(void)setUpdateTimeToNow;
-(NSString *)debugValue;
-(void)setDebugValue:(NSString *)arg1 ;
-(NSData *)addedValue;
-(void)setAddedValue:(NSData *)arg1 ;
-(NSData *)metaValue;
-(void)setMetaValue:(NSData *)arg1 ;
-(NSData *)checkHash;
-(void)setCheckHash:(NSData *)arg1 ;
@end
