/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecordBuilder.h>

@class NSString;

@interface LSBundleRecordUpdater : LSRecordBuilder {

	LSContext _context;
	BOOL _hasContext;
	unsigned _bundleID;
	LSBundleData _bundleData;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)parseManagedPersonaIDs:(id)arg1 containsSystemPersona:(BOOL)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(BOOL)arg2 ;
-(void)parseSINFDictionary:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(void)parsePlaceholderMetadata:(id)arg1 ;
-(BOOL)updateBundleRecord:(id*)arg1 ;
@end

