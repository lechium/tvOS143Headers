/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecord.h>

@class NSDictionary, NSString;

@interface _LSLocalizedStringRecord : LSRecord

@property (readonly) NSDictionary * _allUnsanitizedStringValues; 
@property (readonly) NSString * stringValue; 
@property (readonly) NSDictionary * allStringValues; 
@property (readonly) NSString * defaultStringValue; 
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
+(id)sanitizeString:(id)arg1 ;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(id)debugDescription;
-(id)description;
-(NSString *)stringValue;
-(NSDictionary *)allStringValues;
-(NSString *)defaultStringValue;
-(NSDictionary *)_allUnsanitizedStringValues;
-(id)_allUnsanitizedStringValuesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LocalizedString*)arg4 ;
-(void)_LSRecord_resolve__allUnsanitizedStringValues;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)_initWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 ;
-(id)stringValueWithPreferredLocalizations:(id)arg1 ;
@end

