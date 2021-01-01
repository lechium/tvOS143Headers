/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObjectWFNetworkView;
@class NSMutableDictionary, NSMutableSet;

@interface TVCSWiFiFieldCollector : NSObject {

	NSMutableDictionary* _fields;
	unsigned long long _currentFieldIndex;
	id<NSObject><WFNetworkView> _commonProvider;
	NSMutableSet* _ignoredFields;

}

@property (nonatomic,retain) NSMutableDictionary * fields;                            //@synthesize fields=_fields - In the implementation block
@property (assign,nonatomic) unsigned long long currentFieldIndex;                    //@synthesize currentFieldIndex=_currentFieldIndex - In the implementation block
@property (nonatomic,retain) id<NSObject><WFNetworkView> commonProvider;              //@synthesize commonProvider=_commonProvider - In the implementation block
@property (nonatomic,retain) NSMutableSet * ignoredFields;                            //@synthesize ignoredFields=_ignoredFields - In the implementation block
@property (readonly) unsigned long long count; 
@property (readonly) long long requestedFields; 
@property (readonly) BOOL isFullyCollected; 
-(id)description;
-(id)init;
-(unsigned long long)count;
-(NSMutableDictionary *)fields;
-(void)addField:(id)arg1 ;
-(void)setFields:(NSMutableDictionary *)arg1 ;
-(long long)requestedFields;
-(id)initWithFields:(id)arg1 ;
-(void)setAllFields:(id)arg1 ;
-(void)_updateFieldsWithCommonProvider;
-(void)_addField:(id)arg1 withReplacing:(BOOL)arg2 ;
-(id)fieldForFieldType:(long long)arg1 ;
-(id)currentField;
-(void)_removeField:(id)arg1 ;
-(id)_orderedFields;
-(BOOL)_isSupportedFieldType:(long long)arg1 ;
-(id)initWithRequestedFields:(long long)arg1 ;
-(void)setCommonProvider:(id<NSObject><WFNetworkView>)arg1 ;
-(void)addNewRequestedFields:(long long)arg1 ;
-(void)ignoreField:(id)arg1 ;
-(BOOL)isFullyCollected;
-(id)firstUncollectedField;
-(id)nextField;
-(id)previousField;
-(unsigned long long)currentFieldIndex;
-(void)setCurrentFieldIndex:(unsigned long long)arg1 ;
-(id<NSObject><WFNetworkView>)commonProvider;
-(NSMutableSet *)ignoredFields;
-(void)setIgnoredFields:(NSMutableSet *)arg1 ;
@end

