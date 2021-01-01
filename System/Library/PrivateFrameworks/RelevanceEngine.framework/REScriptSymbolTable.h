/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface REScriptSymbolTable : NSObject {

	REScriptSymbolTable* _parentTable;
	NSMutableDictionary* _definitions;

}
-(BOOL)define:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)setNodeValue:(id)arg1 forDefinition:(id)arg2 error:(id*)arg3 ;
-(BOOL)typeForDefinition:(id)arg1 type:(unsigned long long*)arg2 ;
-(id)objectValueForDefinition:(id)arg1 ;
-(id)nodeValueForDefinition:(id)arg1 ;
-(void)_enumerateObjectsOfType:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithParentScope:(id)arg1 ;
-(BOOL)setObjectValue:(id)arg1 forDefinition:(id)arg2 error:(id*)arg3 ;
-(void)enumerateFeatures:(/*^block*/id)arg1 ;
-(void)enumerateRules:(/*^block*/id)arg1 ;
@end
