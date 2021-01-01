/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQuery.h>

@interface LSPlugInQuery : _LSQuery
+(BOOL)supportsSecureCoding;
+(id)pluginQuery;
+(id)pluginQueryWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
+(id)pluginQueryWithUUID:(id)arg1 ;
+(id)pluginQueryWithIdentifier:(id)arg1 ;
+(id)pluginQueryWithURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)sort:(BOOL)arg1 pluginIDs:(id)arg2 andYield:(/*^block*/id)arg3 context:(LSContext*)arg4 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end
