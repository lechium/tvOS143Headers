/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface _LSJournalledNotification : NSObject <NSSecureCoding> {

	int _notification;
	NSArray* _bundleIDs;
	NSDictionary* _options;
	BOOL _includePlugins;

}

@property (nonatomic,readonly) int notification;                    //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) NSArray * bundleIDs;                 //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,readonly) BOOL includePlugins;                 //@synthesize includePlugins=_includePlugins - In the implementation block
@property (nonatomic,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(int)notification;
-(NSArray *)bundleIDs;
-(BOOL)includePlugins;
-(id)initWithNotification:(int)arg1 bundleIDs:(id)arg2 plugins:(BOOL)arg3 options:(id)arg4 ;
@end

