/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSBundleRecord.h>

@class LSBundleRecord, NSDictionary, LSPlugInKitProxy, NSString, NSUUID, LSExtensionPointRecord;

@interface LSApplicationExtensionRecord : LSBundleRecord {

	LSBundleRecord* _weakContainingBundleRecord;

}

@property (readonly) NSDictionary * if_extensionAttributesDictionary; 
@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) LSBundleRecord * _containingBundleRecord; 
@property (nonatomic,readonly) LSPlugInKitProxy * compatibilityObject; 
@property (readonly) NSString * effectiveBundleIdentifier; 
@property (readonly) NSUUID * uniqueIdentifier; 
@property (readonly) LSBundleRecord * containingBundleRecord; 
@property (readonly) LSExtensionPointRecord * extensionPointRecord; 
+(BOOL)supportsSecureCoding;
+(id)enumeratorWithOptions:(unsigned long long)arg1 ;
+(id)enumeratorWithExtensionPointRecord:(id)arg1 options:(unsigned long long)arg2 ;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)> > >*)_resolvingMethods;
-(NSDictionary *)if_extensionAttributesDictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(unsigned long long)_containerClass;
-(id)initWithUUID:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)supportedIntents;
-(id)supportedIntentMediaCategories;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)intentsRestrictedWhileLocked;
-(id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(LSExtensionPointRecord *)extensionPointRecord;
-(LSBundleRecord *)containingBundleRecord;
-(NSString *)effectiveBundleIdentifier;
-(id)managedPersonas;
-(char)developerType;
-(BOOL)_usesSystemPersona;
-(id)_initWithUUID:(id)arg1 node:(id)arg2 bundleIdentifier:(id)arg3 context:(LSContext*)arg4 error:(id*)arg5 ;
-(id)effectiveBundleIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(id)uniqueIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(LSBundleRecord *)_containingBundleRecord;
-(id)extensionPointRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(id)_containingBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(id)managedPersonasWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3 ;
-(void)_LSRecord_resolve_effectiveBundleIdentifier;
-(void)_LSRecord_resolve_uniqueIdentifier;
-(void)_LSRecord_resolve_extensionPointRecord;
-(id)_initWithContext:(LSContext*)arg1 pluginID:(unsigned)arg2 pluginData:(const LSPluginData*)arg3 error:(id*)arg4 ;
-(void)_LSRecord_resolve__containingBundleRecord;
-(void)_LSRecord_resolve_managedPersonas;
-(BOOL)_containerized;
-(id)_compatibilityObjectWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(NSDictionary *)iconDictionary;
-(void)_LSRecord_resolve_iconDictionary;
-(id)_intentsArrayForKey:(id)arg1 ;
@end

