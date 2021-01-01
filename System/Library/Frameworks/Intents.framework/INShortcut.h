/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSData, INIntent, NSUserActivity, INImage, NSString;

@interface INShortcut : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying> {

	NSData* _activityData;
	INIntent* _intent;
	NSUserActivity* _userActivity;
	INImage* _activityImage;
	NSString* _activitySubtitle;
	NSString* _activityBundleIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (nonatomic,copy,readonly) NSData * activityData;                                         //@synthesize activityData=_activityData - In the implementation block
@property (nonatomic,copy,readonly) INImage * activityImage;                                       //@synthesize activityImage=_activityImage - In the implementation block
@property (nonatomic,copy,readonly) NSString * activitySubtitle;                                   //@synthesize activitySubtitle=_activitySubtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * activityBundleIdentifier;                           //@synthesize activityBundleIdentifier=_activityBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * _title; 
@property (nonatomic,readonly) NSString * _subtitle; 
@property (nonatomic,readonly) NSString * _associatedAppBundleIdentifier; 
@property (nonatomic,copy,readonly) INIntent * intent;                                             //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity;                                      //@synthesize userActivity=_userActivity - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)writableTypeIdentifiersForItemProvider;
+(long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)_subtitle;
-(NSString *)_title;
-(NSUserActivity *)userActivity;
-(INIntent *)intent;
-(id)_initWithIntent:(id)arg1 ;
-(id)initWithIntent:(id)arg1 ;
-(id)initWithUserActivity:(id)arg1 ;
-(id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4 ;
-(id)shortcutWithActivityImage:(id)arg1 ;
-(id)shortcutWithActivityBundleIdentifier:(id)arg1 ;
-(NSData *)activityData;
-(NSString *)_associatedAppBundleIdentifier;
-(INImage *)activityImage;
-(NSString *)activitySubtitle;
-(NSString *)activityBundleIdentifier;
@end

