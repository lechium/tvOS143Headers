/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {

	NSMutableSet* _privileges;

}

@property (nonatomic,retain) NSMutableSet * privileges;              //@synthesize privileges=_privileges - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(NSMutableSet *)privileges;
-(void)setPrivileges:(NSMutableSet *)arg1 ;
-(void)addPrivilege:(id)arg1 ;
-(BOOL)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2 ;
@end

