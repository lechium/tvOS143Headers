/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface WFSerializableContentProvider : NSObject {

	NSMutableDictionary* _entriesForClassNames;

}

@property (nonatomic,readonly) NSMutableDictionary * entriesForClassNames;              //@synthesize entriesForClassNames=_entriesForClassNames - In the implementation block
+(id)sharedProvider;
-(id)init;
-(id)serializedRepresentationForObject:(id)arg1 ;
-(id)objectOfClass:(Class)arg1 withSerializedRepresentation:(id)arg2 ;
-(id)entryConsideringSuperclassesForClass:(Class)arg1 ;
-(void)registerSerializableContentClasses;
-(NSMutableDictionary *)entriesForClassNames;
@end

