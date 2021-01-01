/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _REInterfaceKey, NSArray, NSHashTable, NSMapTable;

@interface _REInterfaceValue : NSObject {

	_REInterfaceKey* _type;
	NSArray* _conformedInterfaces;
	NSHashTable* _conformedProtocols;
	NSMapTable* _properties;
	NSMapTable* _methods;

}

@property (nonatomic,retain) _REInterfaceKey * type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * conformedInterfaces;                 //@synthesize conformedInterfaces=_conformedInterfaces - In the implementation block
@property (nonatomic,retain) NSHashTable * conformedProtocols;              //@synthesize conformedProtocols=_conformedProtocols - In the implementation block
@property (nonatomic,retain) NSMapTable * properties;                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSMapTable * methods;                          //@synthesize methods=_methods - In the implementation block
-(void)setType:(_REInterfaceKey *)arg1 ;
-(_REInterfaceKey *)type;
-(NSMapTable *)properties;
-(NSMapTable *)methods;
-(void)setProperties:(NSMapTable *)arg1 ;
-(void)setMethods:(NSMapTable *)arg1 ;
-(NSArray *)conformedInterfaces;
-(void)setConformedInterfaces:(NSArray *)arg1 ;
-(NSHashTable *)conformedProtocols;
-(void)setConformedProtocols:(NSHashTable *)arg1 ;
@end
