/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PGConfigurationSource.h>

@class NSUserDefaults, NSString;

@interface PGUserDefaultsConfigurationSource : NSObject <PGConfigurationSource> {

	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKey:(id)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
@end
