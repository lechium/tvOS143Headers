/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {

	NSMutableDictionary* _names;

}
+(void)invalidate;
+(id)defaultMappingGenerator;
-(id)init;
-(void)dealloc;
-(id)newGeneratedPropertyName:(id)arg1 ;
-(id)uniqueNameWithBase:(id)arg1 ;
-(id)generateTableName:(id)arg1 isAncillary:(BOOL)arg2 ;
-(id)newUniqueNameWithBase:(unsigned short*)arg1 withLength:(unsigned long long)arg2 ;
@end

