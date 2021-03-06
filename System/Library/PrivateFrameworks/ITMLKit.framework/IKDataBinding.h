/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSMutableSet, NSSet;

@interface IKDataBinding : NSObject {

	NSDictionary* _entriesByKey;
	NSMutableSet* _unresolvedKeys;
	NSDictionary* _keyValues;
	NSSet* _dataBoundKeys;

}

@property (nonatomic,copy) NSDictionary * keyValues;                //@synthesize keyValues=_keyValues - In the implementation block
@property (nonatomic,readonly) NSSet * dataBoundKeys;               //@synthesize dataBoundKeys=_dataBoundKeys - In the implementation block
@property (nonatomic,readonly) NSSet * unresolvedKeys; 
-(id)initWithEntries:(id)arg1 ;
-(NSDictionary *)keyValues;
-(void)setKeyValues:(NSDictionary *)arg1 ;
-(id)keysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(NSSet *)dataBoundKeys;
-(void)setNeedsResolutionForKey:(id)arg1 ;
-(NSSet *)unresolvedKeys;
-(void)markResolvedForKey:(id)arg1 ;
-(id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1 ;
-(void)setNeedsResolutionForAllKeys;
@end

