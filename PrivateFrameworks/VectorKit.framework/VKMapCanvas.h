/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKConsoleView, VKPolylineOverlayPainter, VKMapModel, VKMapCameraController, <VKRoutePreloadSession>, VKCamera, <VKTrackableAnnotation>, VKAnimation, VKTrafficIncident, VKStylesheet, VKLoupeView, GEOMapRegion, NSArray, <VKRouteMatchedAnnotationPresentation>, <VKInteractiveMapDelegate>;

@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKInteractiveMap> {
    VKMapModel *_map;
    VKMapCameraController *_cameraController;
    VKConsoleView *_consoleView;
    VKLoupeView *_loupe;
    <VKInteractiveMapDelegate> *_delegate;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsets;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _fullyOccludedEdgeInsets;
    VKAnimation *_regionAnimation;
    double _finalYaw;
    double _finalPitch;
    struct CGSize { 
        float width; 
        float height; 
    } _lastCanvasSize;
    VKCamera *_defaultTrackingCamera;
    float _lastValidCanvasSizeZoomLevel;
    BOOL _hasLastValidCanvasSizeZoomLevel;
}

@property <VKInteractiveMapDelegate> * delegate;
@property BOOL staysCenteredDuringPinch;
@property BOOL staysCenteredDuringRotation;
@property BOOL isPitchable;
@property(getter=isPitched,readonly) BOOL pitched;
@property BOOL trafficEnabled;
@property(retain) VKStylesheet * stylesheet;
@property int mapType;
@property(readonly) double minimumZoomLevel;
@property(readonly) double maximumZoomLevel;
@property BOOL dynamicMapModesEnabled;
@property int loupeType;
@property(retain) GEOMapRegion * mapRegion;
@property(readonly) double yaw;
@property struct { double x1; double x2; double x3; } centerCoordinate;
@property BOOL allowDatelineWraparound;
@property double trackingZoomScale;
@property BOOL trackingAutoSelectsZoomScale;
@property(retain) VKCamera * defaultTrackingCamera;
@property(readonly) VKTrafficIncident * selectedTrafficIncident;
@property Class calloutViewClass;
@property BOOL labelMarkerSelectionEnabled;
@property(retain) VKPolylineOverlayPainter * focusedLabelsPolylinePainter;
@property(retain) <VKRoutePreloadSession> * routePreloadSession;
@property(readonly) VKConsoleView * consoleView;
@property(readonly) VKMapModel * map;
@property <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;
@property(getter=isFullyPitched,readonly) BOOL fullyPitched;
@property BOOL localizeLabels;
@property int labelScaleFactor;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } fullyOccludedEdgeInsets;
@property(readonly) GEOMapRegion * mapRegionOfInterest;
@property(readonly) double presentationYaw;
@property(readonly) double pitch;
@property(getter=isAnimatingToTrackAnnotation,readonly) BOOL animatingToTrackAnnotation;
@property(readonly) <VKTrackableAnnotation> * trackingAnnotation;
@property(getter=isTrackingHeading,readonly) BOOL trackingHeading;
@property(readonly) NSArray * visibleTileSets;
@property(getter=isFullyDrawn,readonly) BOOL fullyDrawn;

+ (BOOL)supportsMapType:(int)arg1;

- (void)setStylesheet:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)stylesheet;
- (void)setEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (void)didReceiveMemoryWarning;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)arg1;
- (double)pitch;
- (double)yaw;
- (id)defaultTrackingCamera;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraController:(id)arg1 pouncingToCameraPosition:(struct { double x1; double x2; double x3; })arg2 orientation:(const struct { double x1[4][4]; }*)arg3;
- (void)stopRegionAnimation;
- (double)mapModelZoomScale:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 didUpdateCalloutView:(id)arg2 forSource:(id)arg3 animated:(BOOL)arg4;
- (void)mapModel:(id)arg1 willShowCalloutView:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 didUpdateCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 willShowCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 didDeselectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 trafficIncident:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willSelectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willSelectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 needsPanByPixelOffset:(struct CGPoint { float x1; float x2; })arg2 relativeToScreenPoint:(struct CGPoint { float x1; float x2; })arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (BOOL)mapModelInNav:(id)arg1;
- (struct { double x1; double x2; double x3; })screenPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setDefaultTrackingCamera:(id)arg1;
- (id)_mapRegionIgnoringFarAmount:(double)arg1;
- (struct { double x1; double x2; })_mercatorCenterCoordinateForMapRegion:(id)arg1;
- (void)updateCameraForFrameResize;
- (struct CGPoint { float x1; float x2; })_centerScreenPoint;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1;
- (void)setMapRegion:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(struct { double x1; double x2; double x3; })arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; }*)arg2;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (BOOL)isFullyDrawn;
- (void)stopSnappingAnimations;
- (void)stopPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePanWithTranslation:(struct CGPoint { float x1; float x2; })arg1;
- (void)startPanningAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint { float x1; float x2; })arg2 completionHandler:(id)arg3;
- (void)setFocusedLabelsPolylinePainter:(id)arg1;
- (id)focusedLabelsPolylinePainter;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)setCurrentLocationText:(id)arg1;
- (void)setRouteUserOffset:(struct { unsigned int x1; float x2; })arg1;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
- (BOOL)isAnimatingToTrackAnnotation;
- (void)setTrackingZoomScale:(double)arg1;
- (double)trackingZoomScale;
- (id)selectedLabelMarker;
- (void)dismissExpandedCallout;
- (id)calloutPopoverController;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (void)deselectAnnotationMarker:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isFullyPitched;
- (BOOL)isPitched;
- (void)exit3DMode;
- (void)enter3DMode;
- (id)selectedTrafficIncident;
- (void)selectTrafficIncident:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)trafficIncidentForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 pointLabelsOnly:(BOOL)arg2;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 avoidCurrent:(BOOL)arg2;
- (id)navTileSource;
- (id)routePreloadSession;
- (void)setRoutePreloadSession:(id)arg1;
- (void)preloadNavigationSceneResources;
- (void)setShouldLimitTrackingCameraHeight:(BOOL)arg1;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(int)arg2 pounceCompletionHandler:(id)arg3;
- (void)stopTracking;
- (void)updateTrackingForPointOfReference:(struct { double x1; double x2; })arg1 referenceHeading:(double)arg2 pointOfFocus:(struct { double x1; double x2; })arg3 pointsOfInterest:(id)arg4 viewStyle:(int)arg5 focusStyle:(int)arg6 animated:(BOOL)arg7;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })fullyOccludedEdgeInsets;
- (void)setFullyOccludedEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toCameraModelPointToView:(id)arg2;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 shouldRasterize:(BOOL)arg2;
- (struct { double x1; double x2; double x3; })centerCoordinate;
- (void)setCenterCoordinate:(struct { double x1; double x2; double x3; })arg1 animated:(BOOL)arg2;
- (id)consoleView;
- (id)mapRegionOfInterest;
- (id)mapRegion;
- (void)setMapRegion:(id)arg1 animated:(BOOL)arg2;
- (int)loupeType;
- (void)setLoupeType:(int)arg1;
- (double)presentationYaw;
- (void)onTimerFired:(double)arg1;
- (BOOL)canEnter3DMode;
- (void)transferCamera:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)stopTrackingAnnotation;
- (BOOL)isTrackingHeading;
- (id)trackingAnnotation;
- (void)deselectTrafficIncidentAnimated:(BOOL)arg1;
- (void)deselectLabelMarkerAnimated:(BOOL)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (id)routeLineSplitAnnotation;
- (void)addOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (id)overlays;
- (void)addPersistentOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (id)persistentOverlays;
- (void)selectAnnotationMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)removeAnnotationMarker:(id)arg1;
- (id)annotationMarkers;
- (id)selectedAnnotationMarker;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (id)annotationMarkerDeselectionCallback;
- (void)setTrackingAutoSelectsZoomScale:(BOOL)arg1;
- (BOOL)trackingAutoSelectsZoomScale;
- (BOOL)labelMarkerSelectionEnabled;
- (void)setCalloutViewClass:(Class)arg1;
- (Class)calloutViewClass;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setDynamicMapModesEnabled:(BOOL)arg1;
- (BOOL)dynamicMapModesEnabled;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (id)detailedDescription;
- (void)debugHighlightLabelAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearScene;
- (BOOL)isPitchable;
- (void)setIsPitchable:(BOOL)arg1;
- (BOOL)staysCenteredDuringRotation;
- (void)setStaysCenteredDuringRotation:(BOOL)arg1;
- (BOOL)staysCenteredDuringPinch;
- (void)setLabelScaleFactor:(int)arg1;
- (int)labelScaleFactor;
- (void)setLocalizeLabels:(BOOL)arg1;
- (BOOL)localizeLabels;
- (void)setStaysCenteredDuringPinch:(BOOL)arg1;
- (void)setTrafficEnabled:(BOOL)arg1;
- (BOOL)trafficEnabled;
- (void)setStylesheetName:(id)arg1;
- (BOOL)isShowingNoDataPlaceholders;
- (id)attributionsForCurrentRegion;
- (id)visibleTileSets;
- (int)mapType;
- (void)forceSceneLoad;
- (void)setLabelMarkerSelectionEnabled:(BOOL)arg1;
- (void)setAllowDatelineWraparound:(BOOL)arg1;
- (BOOL)allowDatelineWraparound;
- (void)didDrawView;
- (BOOL)currentSceneRequiresMSAA;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (id)map;

@end